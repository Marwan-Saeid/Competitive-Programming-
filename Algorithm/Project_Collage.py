import tkinter as tk
from PIL import Image, ImageTk
import networkx as nx
import matplotlib.pyplot as plt
from collections import deque, defaultdict


# ==================== IMAGE RESIZE FUNCTIONS ====================
def create_resize_handler(bg_label):
    def resize_handler(event):
        resized = original_image.resize(
            (event.width, event.height),
            Image.Resampling.LANCZOS
        )
        photo = ImageTk.PhotoImage(resized)
        bg_label.config(image=photo)
        bg_label.image = photo
    return resize_handler


# ==================== NAVIGATION FUNCTIONS ====================
def navigate(from_window, to_window):
    from_window.withdraw()
    to_window.deiconify()

#====================== Open From Main ==============
def open_sorting_window():
    navigate(main_window, sorting_window)

def open_searching_window():
    navigate(main_window, searching_window)

def open_terversal_window():
    navigate(main_window, terversal_window)

#====================== Open From Sorting ==============
def open_bubble_sort():
    navigate(sorting_window, bubble_window)

def open_insertion_sort():
    navigate(sorting_window, insertion_window)

def open_selection_sort():
    navigate(sorting_window, selection_window)

def open_quick_sort():
    navigate(sorting_window, quick_window)

def open_merge_sort():
    navigate(sorting_window, merge_window)

#====================== Open From Searching ==============
def open_binary_search():
    navigate(searching_window, binary_window)

def open_linear_search():
    navigate(searching_window, linear_window)

#====================== Open From Traversal ==============
def open_BFS_terversal():
    navigate(terversal_window, BFS_window)

def open_DFS_terversal():
    navigate(terversal_window, DFS_window)

#====================== Back To Main ==============
def back_to_main_from_sorting():
    navigate(sorting_window, main_window)

def back_to_main_from_searching():
    navigate(searching_window, main_window)

def back_to_main_from_terversal():
    navigate(terversal_window, main_window)

#====================== Back To Sorting ==============
def back_to_sorting_from_bubble():
    navigate(bubble_window, sorting_window)

def back_to_sorting_from_insertion():
    navigate(insertion_window, sorting_window)

def back_to_sorting_from_selection():
    navigate(selection_window, sorting_window)

def back_to_sorting_from_quick():
    navigate(quick_window, sorting_window)

def back_to_sorting_from_merge():
    navigate(merge_window, sorting_window)

#====================== Back To searching ==============
def back_to_searching_from_binary():
    navigate(binary_window, searching_window)

def back_to_searching_from_linear():
    navigate(linear_window, searching_window)

#====================== Back To Traversal ==============

def back_to_terversal_from_DFS():
    navigate(DFS_window, terversal_window)

def back_to_terversal_from_BFS():
    navigate(BFS_window, terversal_window)


# ==================== Bubble Sorting ALGORITHM ====================
def do_bubble_sorting(): 
    try:
        # Parse input numbers and target
        items = list(map(int, entry_numbers_bubble.get().split()))
        size=len(items)

        for i in range(size-1):
            for j in range(i,size):
                if items[i]>items[j]:
                    temp=items[i]
                    items[i]=items[j]
                    items[j]=temp
        
        entry_output_bubble.delete(0, tk.END)
        entry_output_bubble.insert(0, f"{items}")
    
    except ValueError:
        entry_output_bubble.delete(0, tk.END)
        entry_output_bubble.insert(0, "Invalid input! Use integers only.")
    except Exception as e:
        entry_output_bubble.delete(0, tk.END)
        entry_output_bubble.insert(0, f"Error: {str(e)}")


# ==================== Insertion Sorting ALGORITHM ====================
def do_insertion_sorting():
    try:
        # Parse input numbers and target
        items = list(map(int, entry_numbers_insertion.get().split()))
        size=len(items)

        for i in range(1,size):
            key=items[i]
            index=i
            for j in range(i-1,-1,-1):
                if key<=items[j]:
                    items[index]=items[j]
                    index-=1
            items[index]=key
        
        entry_output_insertion.delete(0, tk.END)
        entry_output_insertion.insert(0, f"{items}")
    
    except ValueError:
        entry_output_insertion.delete(0, tk.END)
        entry_output_insertion.insert(0, "Invalid input! Use integers only.")
    except Exception as e:
        entry_output_insertion.delete(0, tk.END)
        entry_output_insertion.insert(0, f"Error: {str(e)}")


# ==================== Selection Sorting ALGORITHM ====================
def do_Selection_sorting():
    try:
        # Parse input numbers and target
        items = list(map(int, entry_numbers_selection.get().split()))
        size=len(items)

        for i in range(size-1):
            temp=items[i]
            index=i
            for j in range(i,size):
                if items[j]<temp:
                    temp=items[j]
                    index=j
            cur=items[index]
            items[index]=items[i]
            items[i]=cur
        
        entry_output_selection.delete(0, tk.END)
        entry_output_selection.insert(0, f"{items}")
    
    except ValueError:
        entry_output_selection.delete(0, tk.END)
        entry_output_selection.insert(0, "Invalid input! Use integers only.")
    except Exception as e:
        entry_output_selection.delete(0, tk.END)
        entry_output_selection.insert(0, f"Error: {str(e)}")


# ==================== quick Sorting ALGORITHM ====================
def QuickSort(arr,first,end):
    if first>=end:
        return 
    i=first-1
    pivot=arr[end]
    j=first
    while j<end:
        if arr[j]<pivot:
            i+=1
            temp=arr[i]
            arr[i]=arr[j]
            arr[j]=temp
        j+=1
    i+=1
    temp=arr[i]
    arr[i]=arr[end]
    arr[end]=temp

    QuickSort(arr,first,i-1)
    QuickSort(arr,i+1,end)

def do_quick_sorting():
    
    try:
        # Parse input numbers and target
        items = list(map(int, entry_numbers_quick.get().split()))
        size=len(items)
        QuickSort(items,0,size-1)

        entry_output_quick.delete(0, tk.END)
        entry_output_quick.insert(0, f"{items}")
    
    except ValueError:
        entry_output_quick.delete(0, tk.END)
        entry_output_quick.insert(0, "Invalid input! Use integers only.")
    except Exception as e:
        entry_output_quick.delete(0, tk.END)
        entry_output_quick.insert(0, f"Error: {str(e)}")


# ==================== Merge Sorting ALGORITHM ====================
def merge(a,left,mid,right):
    first_arr=[]
    second_arr=[]
    size1=mid-left+1
    size2=right-mid
    
    for i in range(left,mid+1):
        first_arr.append(a[i])
    for i in range(mid+1,right+1):
        second_arr.append(a[i])
    
    result=[]
    index1=0
    index2=0
    
    while(index1<size1 and index2< size2):
        if(first_arr[index1]<second_arr[index2]):
            result.append(first_arr[index1])
            index1+=1
        else:
            result.append(second_arr[index2])
            index2+=1
    
    
    while(index1<size1):
            result.append(first_arr[index1])
            index1+=1
    while(index2<size2):
            result.append(second_arr[index2])
            index2+=1
    
    ind=0
    for i in range(left,right+1):
        a[i]=result[ind]
        ind+=1

def mergeSort(arr,left,right):
    if left >= right:
        return 
    mid=(left+right)//2
    mergeSort(arr,left,mid)
    mergeSort(arr,mid+1,right)
    merge(arr,left,mid,right)

def do_merge_sorting():
    try:
        # Parse input numbers and target
        items = list(map(int, entry_numbers_merge.get().split()))
        size=len(items)

        mergeSort(items,0,size-1)
        
        entry_output_merge.delete(0, tk.END)
        entry_output_merge.insert(0, f"{items}")
    
    except ValueError:
        entry_output_merge.delete(0, tk.END)
        entry_output_merge.insert(0, "Invalid input! Use integers only.")
    except Exception as e:
        entry_output_merge.delete(0, tk.END)
        entry_output_merge.insert(0, f"Error: {str(e)}")


# ==================== BINARY SEARCH ALGORITHM ====================
def do_binary_search():
    """Execute binary search on sorted array to find exact match"""
    try:
        # Parse input numbers and target
        arr = list(map(int, entry_numbers_binary.get().split()))
        target = int(entry_target_binary.get())
        arr.sort()
        
        # Binary search implementation
        left, right = 0, len(arr) - 1
        found = False
        index=0

        for i in range(len(arr)):
            if arr[i]== target:
                index=i
                break

        while left <= right:
            mid = (left + right) // 2
            if arr[mid] == target:
                found = True
                entry_output_binary.delete(0, tk.END)
                entry_output_binary.insert(0, f"Found at position {index + 1} ")
                break
            elif arr[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        
        if not found:
            entry_output_binary.delete(0, tk.END)
            entry_output_binary.insert(0, "Not Found")
    
    except ValueError:
        entry_output_binary.delete(0, tk.END)
        entry_output_binary.insert(0, "Invalid input! Use integers only.")
    except Exception as e:
        entry_output_binary.delete(0, tk.END)
        entry_output_binary.insert(0, f"Error: {str(e)}")

# ==================== Linear SEARCH ALGORITHM ====================
def do_linear_search():
    """Execute linear search on sorted array to find exact match"""
    try:
        # Parse input numbers and target
        arr = list(map(int, entry_numbers_linear.get().split()))
        target = int(entry_target_linear.get())
        
        # Linear search implementation
        found = False
        index=0

        for item in arr:
            index+=1
            if item == target:
                found = True
                entry_output_linear.delete(0, tk.END)
                entry_output_linear.insert(0, f"Found at position {index} ")
                break

        if not found:
            entry_output_linear.delete(0, tk.END)
            entry_output_linear.insert(0, "Not Found")
    
    except ValueError:
        entry_output_linear.delete(0, tk.END)
        entry_output_linear.insert(0, "Invalid input! Use integers only.")
    except Exception as e:
        entry_output_linear.delete(0, tk.END)
        entry_output_linear.insert(0, f"Error: {str(e)}")


# ==================== BFS tarversal ALGORITHM ====================
def build_graph(edges):
    try:
        G_nx = nx.DiGraph()
        G_nx.add_edges_from(edges)

        graph_adj = defaultdict(list)
        for u, v in edges:
            graph_adj[u].append(v)
            graph_adj[v].append(u)  # for BFS traversal

        return G_nx, graph_adj

    except Exception as e:
        tk.messagebox.showerror("Error", f"Error building graph:\n{e}")
        return None, None


def bfs_tree_edges_with_levels(root, graph):
    """Returns list of edges in BFS tree and levels of each node."""
    try:
        q = deque([(root, 0)])  # (node, level)
        visited = set([root])
        tree_edges = []
        levels = {root: 0}

        while q:
            node, level = q.popleft()
            for neighbor in graph[node]:
                if neighbor not in visited:
                    visited.add(neighbor)
                    q.append((neighbor, level + 1))
                    tree_edges.append((node, neighbor))
                    levels[neighbor] = level + 1

        return tree_edges, levels

    except Exception as e:
        tk.messagebox.showerror("Error", f"Error in BFS tree generation:\n{e}")
        return [], {}


def hierarchy_pos(G, root, width=1.0, vert_gap=0.2,
                  vert_loc=0, xcenter=0.5, pos=None, parent=None):
    """Compute hierarchical layout for undirected graph."""
    try:
        if pos is None:
            pos = {root: (xcenter, vert_loc)}
        else:
            pos[root] = (xcenter, vert_loc)

        neighbors = [n for n in G.neighbors(root) if n != parent]
        if len(neighbors) != 0:
            dx = width / len(neighbors)
            nextx = xcenter - width/2 - dx/2
            for neighbor in neighbors:
                nextx += dx
                pos = hierarchy_pos(G, neighbor, width=dx, vert_gap=vert_gap,
                                    vert_loc=vert_loc-vert_gap,
                                    xcenter=nextx, pos=pos, parent=root)
        return pos

    except Exception as e:
        tk.messagebox.showerror("Error", f"Hierarchy layout error:\n{e}")
        return {}


def do_BFS():
    try:
        
        edges_input = entry_numbers_BFS.get("1.0", "end").strip().split("\n")
        edges = [tuple(line.split()) for line in edges_input if line]

        start_node = entry_target_BFS.get("1.0", "end").strip()
        if not start_node:
            tk.messagebox.showwarning("Warning", "Please enter a start node!")
            return

        # build a graph
        G_nx, graph_adj = build_graph(edges)
        if G_nx is None:
            return

        if start_node not in graph_adj:
            tk.messagebox.showerror("Error", f"Node '{start_node}' not in graph!")
            return

        # BFS traversal
        traversal_order = []
        q = deque([start_node])
        visited = set([start_node])

        while q:
            node = q.popleft()
            traversal_order.append(node)
            for neighbor in graph_adj[node]:
                if neighbor not in visited:
                    visited.add(neighbor)
                    q.append(neighbor)

        # Result
        entry_result_BFS.delete("1.0", tk.END)
        entry_result_BFS.insert(tk.END, " -> ".join(traversal_order))

        # BFS tree edges with levels
        tree_edges, levels = bfs_tree_edges_with_levels(start_node, graph_adj)
        G_tree = nx.DiGraph()
        G_tree.add_edges_from(tree_edges)
        G_undirected = G_tree.to_undirected()

        # Layout (try graphviz)
        try:
            pos = nx.nx_agraph.graphviz_layout(G_tree, prog='dot', root=start_node)
        except Exception:
            pos = hierarchy_pos(G_undirected, start_node)

        # draw tree
        try:
            plt.figure(figsize=(8, 6))
            nx.draw(G_tree, pos, with_labels=True, arrows=True,
                    node_size=1200, node_color='lightgreen', font_size=12,
                    labels={n: f"{n}\nLv:{levels[n]}" for n in G_tree.nodes})
            plt.title(f"BFS Tree with Root: {start_node}")
            plt.show()

        except Exception as e:
            tk.messagebox.showerror("Drawing Error", f"Error drawing graph:\n{e}")

    except Exception as e:
        tk.messagebox.showerror("Error", f"Unexpected error in BFS:\n{e}")


# ==================== DFS traversal ALGORITHM ====================

def dfs_tree_edges_with_levels(root, graph):
    """Returns list of edges in DFS tree and levels of each node."""
    try:
        stack = [(root, 0)]  # (node, level)
        visited = set([root])
        tree_edges = []
        levels = {root: 0}

        while stack:
            node, level = stack.pop()
            for neighbor in graph[node]:
                if neighbor not in visited:
                    visited.add(neighbor)
                    stack.append((neighbor, level + 1))
                    tree_edges.append((node, neighbor))
                    levels[neighbor] = level + 1

        return tree_edges, levels

    except Exception as e:
        tk.messagebox.showerror("Error", f"Error in DFS tree generation:\n{e}")
        return [], {}


def do_DFS():
    try:
        # ----------------------- Read edges -----------------------
        edges_input = entry_numbers_DFS.get("1.0", "end").strip().split("\n")
        edges = []

        for line in edges_input:
            if not line.strip():
                continue

            parts = line.split()
            if len(parts) != 2:
                tk.messagebox.showerror(
                    "Invalid Edge", 
                    f"Invalid edge format: '{line}'\nCorrect format: A B"
                )
                return

            u, v = parts
            edges.append((u, v))

        if not edges:
            tk.messagebox.showerror("Error", "Please enter at least one valid edge!")
            return

        # ----------------------- Read start node -----------------------
        start_node = entry_target_DFS.get("1.0", "end").strip()
        if not start_node:
            tk.messagebox.showwarning("Warning", "Please enter a start node!")
            return

        # ----------------------- Build Graph -----------------------
        G_nx, graph_adj = build_graph(edges)
        if G_nx is None:
            return

        if start_node not in graph_adj:
            tk.messagebox.showerror("Error", f"Node '{start_node}' not in graph!")
            return

        # ----------------------- DFS Traversal -----------------------
        traversal_order = []
        stack = [start_node]
        visited = set([start_node])

        try:
            while stack:
                node = stack.pop()
                traversal_order.append(node)

                # reversed for consistent DFS ordering
                for neighbor in reversed(graph_adj[node]):
                    if neighbor not in visited:
                        visited.add(neighbor)
                        stack.append(neighbor)

        except Exception as e:
            tk.messagebox.showerror("DFS Error", f"DFS traversal failed:\n{e}")
            return

        # ----------------------- Show result -----------------------
        entry_result_DFS.delete("1.0", tk.END)
        entry_result_DFS.insert(tk.END, " -> ".join(traversal_order))

        # ----------------------- DFS tree edges & levels -----------------------
        tree_edges, levels = dfs_tree_edges_with_levels(start_node, graph_adj)

        G_tree = nx.DiGraph()
        G_tree.add_edges_from(tree_edges)
        G_undirected = G_tree.to_undirected()

        # ----------------------- Layout -----------------------
        try:
            pos = nx.nx_agraph.graphviz_layout(G_tree, prog='dot', root=start_node)
        except Exception:
            pos = hierarchy_pos(G_undirected, start_node)

        # ----------------------- Draw Tree -----------------------
        try:
            plt.figure(figsize=(8, 6))
            nx.draw(
                G_tree, pos, with_labels=True, arrows=True,
                node_size=1200, node_color='lightgreen', font_size=12,
                labels={n: f"{n}\nLv:{levels[n]}" for n in G_tree.nodes}
            )
            plt.title(f"DFS Tree with Root: {start_node}")
            plt.show()

        except Exception as e:
            tk.messagebox.showerror("Drawing Error", f"Error drawing graph:\n{e}")

    except Exception as e:
        tk.messagebox.showerror("Error", f"Unexpected error in DFS:\n{e}")


# ==================== MAIN WINDOW SETUP ====================
main_window = tk.Tk()
main_window.title("Algorithm Visualizer - Home")
main_window.geometry("1000x600")
main_window.resizable(True, True)

original_image = Image.open("bg.jpg")
main_photo = ImageTk.PhotoImage(original_image)

main_bg_label = tk.Label(main_window, image=main_photo)
main_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
main_window.bind("<Configure>", create_resize_handler(main_bg_label))

# Welcome message (DESIGN ADJUSTED)
message_label = tk.Label(
    main_window,
    text="Welcome",
    font=("Segoe UI", 28, "bold"),
    fg="#EAF6FF",
    bg="#202020"
)
message_label.place(relx=0.5, rely=0.18, anchor="center")

# helper: hover effect for buttons (DESIGN)
def add_hover_effect(btn, enter_bg="#ff9900", leave_bg=None):
    # لو الزر None (مش متعملش Hover)
    if btn is None:
        print("Warning: add_hover_effect called with btn=None")
        return

    try:
        # store original bg to restore
        orig = btn.cget("bg") if leave_bg is None else leave_bg
    except Exception:
        orig = leave_bg if leave_bg is not None else "#f0f0f0"  # fallback default

    def on_enter(e):
        try:
            btn.config(bg=enter_bg)
        except:
            pass

    def on_leave(e):
        try:
            btn.config(bg=orig)
        except:
            pass

    btn.bind("<Enter>", on_enter)
    btn.bind("<Leave>", on_leave)

positions_main = [0.2,0.5,0.8]  
names_main = ["Sorting Algorithms", "Searching Algorithms", "Traversal Algorithms"]
commands_main = [open_sorting_window,open_searching_window,open_terversal_window]

for pos, name, cmd in zip(positions_main, names_main, commands_main):
    btn = tk.Button(
        main_window,
        text=name,
        fg="#EEEEEE",
        bg="#2D9C5A",
        font=("Arial", 16, "bold"),
        width=20,
        height=2,
        cursor="hand2",
        command=cmd,
        bd=0,
        relief="flat",
        highlightthickness=0,
        activebackground="#39b54a"
    )
    btn.place(relx=pos, rely=0.48, anchor="center")
    add_hover_effect(btn, enter_bg="#39b54a")


# ==================== SORTING WINDOW ====================
sorting_window = tk.Toplevel()
sorting_window.title("Sorting Algorithms")
sorting_window.geometry("1000x600")
sorting_window.withdraw()

sorting_photo = ImageTk.PhotoImage(original_image)
sorting_bg_label = tk.Label(sorting_window, image=sorting_photo)
sorting_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
sorting_window.bind("<Configure>", create_resize_handler(sorting_bg_label))

sorting_message_label = tk.Label(
    sorting_window,
    text="Choose a Sorting Algorithm",
    font=("Arial", 20, "bold"),
    fg="#FFFFFF",
    bg="#202020"
)
sorting_message_label.place(relx=0.5, rely=0.18, anchor="center")

positions_sorting = [0.17, 0.33, 0.49, 0.65, 0.81]  
names_sorting = ["Bubble Sort", "Insertion Sort", "Selection Sort", "Quick Sort", "Merge Sort"]
commands_sorting = [open_bubble_sort, open_insertion_sort, open_selection_sort, open_quick_sort, open_merge_sort]

for pos, name, cmd in zip(positions_sorting,names_sorting,commands_sorting):
    btn = tk.Button(
        sorting_window,
        text=name,
        fg="#EEEEEE",
        bg="#2D9C5A",
        font=("Arial", 13, "bold"),
        width=15,
        height=2,
        cursor="hand2",
        command=cmd,
        bd=0,
        relief="flat",
        highlightthickness=0,
        activebackground="#39b54a"
    )
    btn.place(relx=pos, rely=0.45, anchor="center")
    add_hover_effect(btn, enter_bg="#39b54a")

# Back button
button_back_main_window = tk.Button(
    sorting_window,
    text="← Back to Main",
    fg="#FFFFFF",
    bg="#FF5555",
    font=("Arial", 14, "bold"),
    width=18,
    height=2,
    command=back_to_main_from_sorting,
    cursor="hand2",
    bd=0,
    activebackground="#ff6b6b"
)
button_back_main_window.place(relx=0.5, rely=0.72, anchor="center")
add_hover_effect(button_back_main_window, enter_bg="#ff6b6b", leave_bg="#FF5555")


# ==================== SEARCHING WINDOW ====================
searching_window = tk.Toplevel()
searching_window.title("Searching Algorithms")
searching_window.geometry("1000x600")
searching_window.withdraw()

searching_photo = ImageTk.PhotoImage(original_image)
searching_bg_label = tk.Label(searching_window, image=searching_photo)
searching_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
searching_window.bind("<Configure>", create_resize_handler(searching_bg_label))

searching_message_label = tk.Label(
    searching_window,
    text="Choose a Searching Algorithm",
    font=("Verdana", 20, "bold"),
    fg="#FFFFFF",
    bg="#202020"
)
searching_message_label.place(relx=0.5, rely=0.18, anchor="center")

positions_searching = [0.35,0.7]  
names_searching = ["Binary Searching", "Linear Searching"]
commands_searching = [open_binary_search,open_linear_search]

for pos, name, cmd in zip(positions_searching,names_searching,commands_searching):
    btn = tk.Button(
        searching_window,
        text=name,
        fg="#EEEEEE",
        bg="#2D9C5A",
        font=("Arial", 15, "bold"),
        width=18,
        height=2,
        cursor="hand2",
        command=cmd,
        bd=0,
        relief="flat",
        highlightthickness=0,
        activebackground="#39b54a"
    )
    btn.place(relx=pos, rely=0.45, anchor="center")
    add_hover_effect(btn, enter_bg="#39b54a")

# Back button
button_back_main_window = tk.Button(
    searching_window,
    text="← Back to Main",
    fg="#FFFFFF",
    bg="#FF5555",
    font=("Arial", 14, "bold"),
    width=18,
    height=2,
    command=back_to_main_from_searching,
    cursor="hand2",
    bd=0,
    activebackground="#ff6b6b"
)
button_back_main_window.place(relx=0.5, rely=0.72, anchor="center")
add_hover_effect(button_back_main_window, enter_bg="#ff6b6b", leave_bg="#FF5555")


# ==================== TERVERSAL WINDOW ====================
terversal_window = tk.Toplevel()
terversal_window.title("Terversal Algorithms")
terversal_window.geometry("1000x600")
terversal_window.withdraw()

terversal_photo = ImageTk.PhotoImage(original_image)
terversal_bg_label = tk.Label(terversal_window, image=terversal_photo)
terversal_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
terversal_window.bind("<Configure>", create_resize_handler(terversal_bg_label))

# Title 
terversal_message_label = tk.Label(
    terversal_window,
    text="Choose a Terversal Algorithm",
    font=("Arial", 20, "bold"),
    fg="#FFFFFF",
    bg="#202020"
)
terversal_message_label.place(relx=0.5, rely=0.18, anchor="center")

positions_terversal = [0.35,0.7]  
names_terversal = ["BFS", "DFS"]
commands_terversal = [open_BFS_terversal,open_DFS_terversal]

for pos, name, cmd in zip(positions_terversal,names_terversal,commands_terversal):
    btn = tk.Button(
        terversal_window,
        text=name,
        fg="#EEEEEE",
        bg="#2D9C5A",
        font=("Arial", 15, "bold"),
        width=18,
        height=2,
        cursor="hand2",
        command=cmd,
        bd=0,
        relief="flat",
        highlightthickness=0,
        activebackground="#39b54a"
    )
    btn.place(relx=pos, rely=0.45, anchor="center")
    add_hover_effect(btn, enter_bg="#39b54a")

# Back button
button_back_main_window = tk.Button(
    terversal_window,
    text="← Back to Main",
    fg="#FFFFFF",
    bg="#FF5555",
    font=("Arial", 14, "bold"),
    width=18,
    height=2,
    command=back_to_main_from_terversal,
    cursor="hand2",
    bd=0,
    activebackground="#ff6b6b"
)
button_back_main_window.place(relx=0.5, rely=0.72, anchor="center")
add_hover_effect(button_back_main_window, enter_bg="#ff6b6b", leave_bg="#FF5555")


# ==================== Bubble Sorting  WINDOW ====================
bubble_window = tk.Toplevel()
bubble_window.title("Bubble sort")
bubble_window.geometry("1000x600")
bubble_window.withdraw()

bubble_photo = ImageTk.PhotoImage(original_image)
bubble_bg_label = tk.Label(bubble_window, image=bubble_photo)
bubble_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
bubble_window.bind("<Configure>", create_resize_handler(bubble_bg_label))

# Title
bubble_message_label = tk.Label(
    bubble_window,
    text="Bubble sorting Algorithm",
    font=("Verdana", 24, "bold"),
    fg="#FFFFFF",
    bg="#202020"
)
bubble_message_label.place(relx=0.5, rely=0.15, anchor="center")

# Input numbers label and entry
tk.Label(
    bubble_window,
    text="Enter numbers (space-separated):",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.35, anchor="w")

entry_numbers_bubble = tk.Entry(bubble_window, font=("Arial", 13), width=35)
entry_numbers_bubble.place(relx=0.55, rely=0.35, anchor="w")

# Result label and entry
tk.Label(
    bubble_window,
    text="Result:",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.55, anchor="w")

entry_output_bubble = tk.Entry(bubble_window, font=("Arial", 13), width=35, state="normal")
entry_output_bubble.place(relx=0.55, rely=0.55, anchor="w")

# Search button
search_button_bubble = tk.Button(
    bubble_window,
    text="🔍 Search",
    font=("Arial", 14, "bold"),
    bg="#2D9C5A",
    fg="white",
    width=18,
    height=2,
    command=do_bubble_sorting,
    cursor="hand2",
    bd=0,
    activebackground="#39b54a"
)
search_button_bubble.place(relx=0.5, rely=0.68, anchor="center")
add_hover_effect(search_button_bubble, enter_bg="#39b54a")

# Back button
button_back_to_sorting = tk.Button(
    bubble_window,
    text="← Back",
    fg="#FFFFFF",
    bg="#FF5555",
    font=("Arial", 14, "bold"),
    width=18,
    height=2,
    command=back_to_sorting_from_bubble,
    cursor="hand2",
    bd=0,
    activebackground="#ff6b6b"
)
button_back_to_sorting.place(relx=0.5, rely=0.82, anchor="center")
add_hover_effect(button_back_to_sorting, enter_bg="#ff6b6b", leave_bg="#FF5555")

# ==================== insertion Sorting  WINDOW ====================
insertion_window = tk.Toplevel()
insertion_window.title("Insertion sort")
insertion_window.geometry("1000x600")
insertion_window.withdraw()

insertion_photo = ImageTk.PhotoImage(original_image)
insertion_bg_label = tk.Label(insertion_window, image=insertion_photo)
insertion_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
insertion_window.bind("<Configure>", create_resize_handler(insertion_bg_label))

# Title
insertion_message_label = tk.Label(
    insertion_window,
    text="Insertion sorting Algorithm",
    font=("Verdana", 24, "bold"),
    fg="#FFFFFF",
    bg="#202020"
)
insertion_message_label.place(relx=0.5, rely=0.15, anchor="center")

# Input numbers label and entry
tk.Label(
    insertion_window,
    text="Enter numbers (space-separated):",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.35, anchor="w")

entry_numbers_insertion = tk.Entry(insertion_window, font=("Arial", 13), width=35)
entry_numbers_insertion.place(relx=0.55, rely=0.35, anchor="w")


# Result label and entry
tk.Label(
    insertion_window,
    text="Result:",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.55, anchor="w")

entry_output_insertion = tk.Entry(insertion_window, font=("Arial", 13), width=35, state="normal")
entry_output_insertion.place(relx=0.55, rely=0.55, anchor="w")

# Search button
search_button_insertion = tk.Button(
    insertion_window,
    text="🔍 Search",
    font=("Arial", 14, "bold"),
    bg="#2D9C5A",
    fg="white",
    width=18,
    height=2,
    command=do_insertion_sorting,
    cursor="hand2",
    bd=0,
    activebackground="#39b54a"
)
search_button_insertion.place(relx=0.5, rely=0.68, anchor="center")
add_hover_effect(search_button_insertion, enter_bg="#39b54a")

# Back button
button_back_to_sorting = tk.Button(
    insertion_window,
    text="← Back",
    fg="#FFFFFF",
    bg="#FF5555",
    font=("Arial", 14, "bold"),
    width=18,
    height=2,
    command=back_to_sorting_from_insertion,
    cursor="hand2",
    bd=0,
    activebackground="#ff6b6b"
)
button_back_to_sorting.place(relx=0.5, rely=0.82, anchor="center")
add_hover_effect(button_back_to_sorting, enter_bg="#ff6b6b", leave_bg="#FF5555")


# ==================== selection Sorting  WINDOW ====================
selection_window = tk.Toplevel()
selection_window.title("Selection sort")
selection_window.geometry("1000x600")
selection_window.withdraw()

selection_photo = ImageTk.PhotoImage(original_image)
selection_bg_label = tk.Label(selection_window, image=selection_photo)
selection_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
selection_window.bind("<Configure>", create_resize_handler(selection_bg_label))

# Title
selection_message_label = tk.Label(
    selection_window,
    text="Selection sorting Algorithm",
    font=("Verdana", 24, "bold"),
    fg="#FFFFFF",
    bg="#202020"
)
selection_message_label.place(relx=0.5, rely=0.15, anchor="center")

# Input numbers label and entry
tk.Label(
    selection_window,
    text="Enter numbers (space-separated):",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.35, anchor="w")

entry_numbers_selection = tk.Entry(selection_window, font=("Arial", 13), width=35)
entry_numbers_selection.place(relx=0.55, rely=0.35, anchor="w")

# Result label and entry
tk.Label(
    selection_window,
    text="Result:",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.55, anchor="w")

entry_output_selection = tk.Entry(selection_window, font=("Arial", 13), width=35, state="normal")
entry_output_selection.place(relx=0.55, rely=0.55, anchor="w")

# Search button
search_button_selection = tk.Button(
    selection_window,
    text="🔍 Search",
    font=("Arial", 14, "bold"),
    bg="#2D9C5A",
    fg="white",
    width=18,
    height=2,
    command=do_Selection_sorting,
    cursor="hand2",
    bd=0,
    activebackground="#39b54a"
)
search_button_selection.place(relx=0.5, rely=0.68, anchor="center")
add_hover_effect(search_button_selection, enter_bg="#39b54a")

# Back button
button_back_to_sorting = tk.Button(
    selection_window,
    text="← Back",
    fg="#FFFFFF",
    bg="#FF5555",
    font=("Arial", 14, "bold"),
    width=18,
    height=2,
    command=back_to_sorting_from_selection,
    cursor="hand2",
    bd=0,
    activebackground="#ff6b6b"
)
button_back_to_sorting.place(relx=0.5, rely=0.82, anchor="center")
add_hover_effect(button_back_to_sorting, enter_bg="#ff6b6b", leave_bg="#FF5555")


# ==================== quick Sorting  WINDOW ====================

quick_window = tk.Toplevel()
quick_window.title("Quick sort")
quick_window.geometry("1000x600")
quick_window.withdraw()

quick_photo = ImageTk.PhotoImage(original_image)
quick_bg_label = tk.Label(quick_window, image=quick_photo)
quick_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
quick_window.bind("<Configure>", create_resize_handler(quick_bg_label))

# Title
quick_message_label = tk.Label(
    quick_window,
    text="Quick Sorting Algorithm",
    font=("Verdana", 24, "bold"),
    fg="#FFFFFF",
    bg="#202020"
)
quick_message_label.place(relx=0.5, rely=0.15, anchor="center")

# Input numbers label and entry
tk.Label(
    quick_window,
    text="Enter numbers (space-separated):",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.35, anchor="w")

entry_numbers_quick = tk.Entry(quick_window, font=("Arial", 13), width=35)
entry_numbers_quick.place(relx=0.55, rely=0.35, anchor="w")

# Result label and entry
tk.Label(
    quick_window,
    text="Result:",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.55, anchor="w")

entry_output_quick = tk.Entry(quick_window, font=("Arial", 13), width=35, state="normal")
entry_output_quick.place(relx=0.55, rely=0.55, anchor="w")

# Search button
search_button_quick = tk.Button(
    quick_window,
    text="🔍 Search",
    font=("Arial", 14, "bold"),
    bg="#2D9C5A",
    fg="white",
    width=18,
    height=2,
    command=do_quick_sorting,
    cursor="hand2",
    bd=0,
    activebackground="#39b54a"
)
search_button_quick.place(relx=0.5, rely=0.68, anchor="center")
add_hover_effect(search_button_quick, enter_bg="#39b54a")

# Back button
button_back_to_sorting = tk.Button(
    quick_window,
    text="← Back",
    fg="#FFFFFF",
    bg="#FF5555",
    font=("Arial", 14, "bold"),
    width=18,
    height=2,
    command=back_to_sorting_from_quick,
    cursor="hand2",
    bd=0,
    activebackground="#ff6b6b"
)
button_back_to_sorting.place(relx=0.5, rely=0.82, anchor="center")
add_hover_effect(button_back_to_sorting, enter_bg="#ff6b6b", leave_bg="#FF5555")

# ==================== merge Sorting  WINDOW ====================
merge_window = tk.Toplevel()
merge_window.title("Merge Sort")
merge_window.geometry("1000x600")
merge_window.withdraw()

merge_photo = ImageTk.PhotoImage(original_image)
merge_bg_label = tk.Label(merge_window, image=merge_photo)
merge_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
merge_window.bind("<Configure>", create_resize_handler(merge_bg_label))

# Title
merge_message_label = tk.Label(
    merge_window,
    text="Merge Sorting Algorithm",
    font=("Verdana", 24, "bold"),
    fg="#FFFFFF",
    bg="#202020"
)
merge_message_label.place(relx=0.5, rely=0.15, anchor="center")

# Input numbers label and entry
tk.Label(
    merge_window,
    text="Enter numbers (space-separated):",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.35, anchor="w")

entry_numbers_merge = tk.Entry(merge_window, font=("Arial", 13), width=35)
entry_numbers_merge.place(relx=0.55, rely=0.35, anchor="w")

# Result label and entry
tk.Label(
    merge_window,
    text="Result:",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.55, anchor="w")

entry_output_merge = tk.Entry(merge_window, font=("Arial", 13), width=35, state="normal")
entry_output_merge.place(relx=0.55, rely=0.55, anchor="w")

# Search button
search_button_merge = tk.Button(
    merge_window,
    text="🔍 Search",
    font=("Arial", 14, "bold"),
    bg="#2D9C5A",
    fg="white",
    width=18,
    height=2,
    command=do_merge_sorting,
    cursor="hand2",
    bd=0,
    activebackground="#39b54a"
)
search_button_merge.place(relx=0.5, rely=0.68, anchor="center")
add_hover_effect(search_button_merge, enter_bg="#39b54a")

# Back button
button_back_to_sorting = tk.Button(
    merge_window,
    text="← Back",
    fg="#FFFFFF",
    bg="#FF5555",
    font=("Arial", 14, "bold"),
    width=18,
    height=2,
    command=back_to_sorting_from_merge,
    cursor="hand2",
    bd=0,
    activebackground="#ff6b6b"
)
button_back_to_sorting.place(relx=0.5, rely=0.82, anchor="center")
add_hover_effect(button_back_to_sorting, enter_bg="#ff6b6b", leave_bg="#FF5555")

# ==================== BINARY SEARCH WINDOW ====================
binary_window = tk.Toplevel()
binary_window.title("Binary Search")
binary_window.geometry("1000x600")
binary_window.withdraw()

binary_photo = ImageTk.PhotoImage(original_image)
binary_bg_label = tk.Label(binary_window, image=binary_photo)
binary_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
binary_window.bind("<Configure>", create_resize_handler(binary_bg_label))

# Title
binary_message_label = tk.Label(
    binary_window,
    text="Binary Search Algorithm",
    font=("Verdana", 24, "bold"),
    fg="#FFFFFF",
    bg="#202020"
)
binary_message_label.place(relx=0.5, rely=0.15, anchor="center")

# Input numbers label and entry
tk.Label(
    binary_window,
    text="Enter numbers (space-separated):",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.35, anchor="w")

entry_numbers_binary = tk.Entry(binary_window, font=("Arial", 13), width=35)
entry_numbers_binary.place(relx=0.55, rely=0.35, anchor="w")

# Target number label and entry
tk.Label(
    binary_window,
    text="Enter number to search:",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.45, anchor="w")

entry_target_binary = tk.Entry(binary_window, font=("Arial", 13), width=35)
entry_target_binary.place(relx=0.55, rely=0.45, anchor="w")

# Result label and entry
tk.Label(
    binary_window,
    text="Result:",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.55, anchor="w")

entry_output_binary = tk.Entry(binary_window, font=("Arial", 13), width=35, state="normal")
entry_output_binary.place(relx=0.55, rely=0.55, anchor="w")

# Search button
search_button_binary = tk.Button(
    binary_window,
    text="🔍 Search",
    font=("Arial", 14, "bold"),
    bg="#2D9C5A",
    fg="white",
    width=18,
    height=2,
    command=do_binary_search,
    cursor="hand2",
    bd=0,
    activebackground="#39b54a"
)
search_button_binary.place(relx=0.5, rely=0.68, anchor="center")
add_hover_effect(search_button_binary, enter_bg="#39b54a")

# Back button
button_back_to_searching_binary = tk.Button(
    binary_window,
    text="← Back",
    fg="#FFFFFF",
    bg="#FF5555",
    font=("Arial", 14, "bold"),
    width=18,
    height=2,
    command=back_to_searching_from_binary,
    cursor="hand2",
    bd=0,
    activebackground="#ff6b6b"
)
button_back_to_searching_binary.place(relx=0.5, rely=0.82, anchor="center")
add_hover_effect(button_back_to_searching_binary, enter_bg="#ff6b6b", leave_bg="#FF5555")


# ==================== Linear Seaching WINDOW ====================
linear_window = tk.Toplevel()
linear_window.title("Linear Search")
linear_window.geometry("1000x600")
linear_window.withdraw()

linear_photo = ImageTk.PhotoImage(original_image)
linear_bg_label = tk.Label(linear_window, image=linear_photo)
linear_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
linear_window.bind("<Configure>", create_resize_handler(linear_bg_label))

# Title
linear_message_label = tk.Label(
    linear_window,
    text="Linear Searching Algorithm",
    font=("Verdana", 24, "bold"),
    fg="#FFFFFF",
    bg="#202020"
)
linear_message_label.place(relx=0.5, rely=0.15, anchor="center")

# Input numbers label and entry
tk.Label(
    linear_window,
    text="Enter numbers (space-separated):",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.35, anchor="w")

entry_numbers_linear = tk.Entry(linear_window, font=("Arial", 13), width=35)
entry_numbers_linear.place(relx=0.55, rely=0.35, anchor="w")

# Target number label and entry
tk.Label(
    linear_window,
    text="Enter number to search:",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.45, anchor="w")

entry_target_linear = tk.Entry(linear_window, font=("Arial", 13), width=35)
entry_target_linear.place(relx=0.55, rely=0.45, anchor="w")

# Result label and entry
tk.Label(
    linear_window,
    text="Result:",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.55, anchor="w")

entry_output_linear = tk.Entry(linear_window, font=("Arial", 13), width=35, state="normal")
entry_output_linear.place(relx=0.55, rely=0.55, anchor="w")

# Search button
search_button_linear = tk.Button(
    linear_window,
    text="🔍 Search",
    font=("Arial", 14, "bold"),
    bg="#2D9C5A",
    fg="white",
    width=18,
    height=2,
    command=do_linear_search,
    cursor="hand2",
    bd=0,
    activebackground="#39b54a"
)
search_button_linear.place(relx=0.5, rely=0.68, anchor="center")
add_hover_effect(search_button_linear, enter_bg="#39b54a")

# Back button
button_back_to_searching_linear = tk.Button(
    linear_window,
    text="← Back",
    fg="#FFFFFF",
    bg="#FF5555",
    font=("Arial", 14, "bold"),
    width=18,
    height=2,
    command=back_to_searching_from_linear,
    cursor="hand2",
    bd=0,
    activebackground="#ff6b6b"
)
button_back_to_searching_linear.place(relx=0.5, rely=0.82, anchor="center")
add_hover_effect(button_back_to_searching_linear, enter_bg="#ff6b6b", leave_bg="#FF5555")


# ==================== BFS traversal  WINDOW ====================
BFS_window = tk.Toplevel()        
BFS_window.title("BFS Algorithm")
BFS_window.geometry("1000x600")
BFS_window.withdraw()

BFS_photo = ImageTk.PhotoImage(original_image)
BFS_bg_label = tk.Label(BFS_window, image=BFS_photo)
BFS_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
BFS_window.bind("<Configure>", create_resize_handler(BFS_bg_label))

# Title
BFS_title_label = tk.Label(
    BFS_window,
    text="BFS Traversal Algorithm",
    font=("Verdana", 24, "bold"),
    fg="#FFFFFF",
    bg="#202020"
)
BFS_title_label.place(relx=0.5, rely=0.15, anchor="center")

# ----- Edges -----
tk.Label(
    BFS_window,
    text="Enter edges one per line (format: u v):",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.35, anchor="w")

entry_numbers_BFS = tk.Text(
    BFS_window,
    font=("Arial", 13, "bold"),
    fg="#FFFFFF",
    width=32,
    height=5,
    background="#202020"
)
entry_numbers_BFS.place(relx=0.55, rely=0.38, anchor="w")

# ----- Start node -----
tk.Label(
    BFS_window,
    text="Enter node you’d like to start from:",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.55, anchor="w")

entry_target_BFS = tk.Text(
    BFS_window,
    font=("Arial", 13, "bold"),
    fg="#FFFFFF",
    width=15,
    height=1,
    background="#202020"
)
entry_target_BFS.place(relx=0.55, rely=0.55, anchor="w")

# ----- Result -----
tk.Label(
    BFS_window,
    text="Result:",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.65, anchor="w")

entry_result_BFS = tk.Text(
    BFS_window,
    font=("Arial", 13, "bold"),
    fg="#FFFFFF",
    width=35,
    height=1,
    background="#202020"
)
entry_result_BFS.place(relx=0.55, rely=0.65, anchor="w")

# ----- Buttons -----
search_button_BFS = tk.Button(
    BFS_window, 
    text="🔍 Traverse",
    font=("Arial", 14, "bold"),
    bg="#2D9C5A", 
    fg="white", 
    width=18, 
    height=2,
    command=do_BFS, 
    cursor="hand2", 
    bd=0, 
    activebackground="#39b54a"
)
search_button_BFS.place(relx=0.5, rely=0.78, anchor="center")
add_hover_effect(search_button_BFS, enter_bg="#39b54a")

button_back_main_window_BFS = tk.Button(
    BFS_window,
    text="← Back to Main",
    fg="#FFFFFF",
    bg="#FF5555",
    font=("Arial", 14, "bold"),
    width=18,
    height=2,
    command=back_to_terversal_from_BFS,
    cursor="hand2",
    bd=0,
    activebackground="#ff6b6b"
)
button_back_main_window_BFS.place(relx=0.5, rely=0.9, anchor="center")
add_hover_effect(button_back_main_window_BFS, enter_bg="#ff6b6b", leave_bg="#FF5555")



# ==================== DFS traversal  WINDOW ====================
# ==================== DFS traversal  WINDOW ====================
DFS_window = tk.Toplevel()        
DFS_window.title("DFS Algorithm")
DFS_window.geometry("1000x600")
DFS_window.withdraw()

DFS_photo = ImageTk.PhotoImage(original_image)
DFS_bg_label = tk.Label(DFS_window, image=DFS_photo)
DFS_bg_label.place(x=0, y=0, relwidth=1, relheight=1)
DFS_window.bind("<Configure>", create_resize_handler(DFS_bg_label))

# Title
DFS_title_label = tk.Label(
    DFS_window,
    text="DFS Traversal Algorithm",
    font=("Verdana", 24, "bold"),
    fg="#FFFFFF",
    bg="#202020"
)
DFS_title_label.place(relx=0.5, rely=0.15, anchor="center")

# ----- Edges -----
tk.Label(
    DFS_window,
    text="Enter edges one per line (format: u v):",
    font=("Arial", 13, "bold"),
    bg="#202020",
    fg="white"
).place(relx=0.18, rely=0.35, anchor="w")

entry_numbers_DFS = tk.Text(
    DFS_window,
    font=("Arial", 13, "bold"),
    fg="#FFFFFF",
    width=32,
    height=5,
    background="#202020"
)
entry_numbers_DFS.place(relx=0.55, rely=0.38, anchor="w")

# ----- Start node -----
tk.Label(
    DFS_window, 
    text="Enter node you’d like to start from:",
    font=("Arial", 13, "bold"), 
    bg="#202020", 
    fg="white"
).place(relx=0.18, rely=0.55, anchor="w")

entry_target_DFS = tk.Text(
    DFS_window,
    font=("Arial", 13, "bold"),
    fg="#FFFFFF",
    width=15,
    height=1,
    background="#202020"
)
entry_target_DFS.place(relx=0.55, rely=0.55, anchor="w")

# ----- Result -----
tk.Label(
    DFS_window, 
    text="Result:",
    font=("Arial", 13, "bold"), 
    bg="#202020", 
    fg="white"
).place(relx=0.18, rely=0.65, anchor="w")

entry_result_DFS = tk.Text(
    DFS_window,
    font=("Arial", 13, "bold"),
    fg="#FFFFFF",
    width=35,
    height=1,
    background="#202020"
)
entry_result_DFS.place(relx=0.55, rely=0.65, anchor="w")

# ----- Buttons -----
search_button_DFS = tk.Button(
    DFS_window,
    text="🔍 Traverse", 
    font=("Arial", 14, "bold"),
    bg="#2D9C5A", 
    fg="white", 
    width=18, 
    height=2,
    command=do_DFS, 
    cursor="hand2", 
    bd=0, 
    activebackground="#39b54a"
)
search_button_DFS.place(relx=0.5, rely=0.78, anchor="center")
add_hover_effect(search_button_DFS, enter_bg="#39b54a")

button_back_main_window_DFS = tk.Button(
    DFS_window,
    text="← Back to Main",
    fg="#FFFFFF",
    bg="#FF5555",
    font=("Arial", 14, "bold"),
    width=18,
    height=2,
    command=back_to_terversal_from_DFS,
    cursor="hand2",
    bd=0,
    activebackground="#ff6b6b"
)
button_back_main_window_DFS.place(relx=0.5, rely=0.9, anchor="center")
add_hover_effect(button_back_main_window_DFS, enter_bg="#ff6b6b", leave_bg="#FF5555")



# ==================== START APPLICATION ====================

main_window.mainloop()