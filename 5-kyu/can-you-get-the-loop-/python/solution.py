def loop_size(node):
    listN = [ ]
    test_node = node
    while (1 == 1):
        if hasattr(test_node, 'visited'):
            break
        listN.append(test_node)
        new = test_node.next
        test_node.visited = True
        test_node = new
    N = len(listN)
    return N - listN.index(test_node)