
def tree_by_levels(node):
    if (node == None):
        return []
    l = [node]
    s = []
    while (len(l) != 0):
      root = l.pop(0)
      s.append(root.value)
      if (root.left != None):
          l.append(root.left)
      if (root.right != None):
          l.append(root.right)
    return s
    
    
    