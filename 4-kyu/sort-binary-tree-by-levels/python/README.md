You are given a binary tree:

```ruby
class TreeNode
  attr_accessor :left
  attr_accessor :right
  attr_reader :value
end
```
```haskell
data TreeNode a = TreeNode {
  left  :: Maybe (TreeNode a),
  right :: Maybe (TreeNode a),
  value :: a
  } deriving Show
```
```python
class Node:
    def __init__(self, L, R, n):
        self.left = L
        self.right = R
        self.value = n
```
```groovy
class Node {
    Integer value
    Node left
    Node right

    Node(left, right, value) {
        this.value = value
        this.left = left
        this.right = right
    }
}
```
```csharp
public class Node
{
    public Node Left;
    public Node Right;
    public int Value;
    
    public Node(Node l, Node r, int v)
    {
        Left = l;
        Right = r;
        Value = v;
    }
}
```
```java
public class Node {
  public Node left;
  public Node right;
  public int value;
  
  public Node(Node l, Node r, int v) {
    left = l;
    right = r;
    value = v;
  }
}
```

Your task is to return the list with elements from tree sorted by levels, which means the root element goes first, then root children (from left to right) are second and third, and so on.
```if:ruby
Return empty array if root is `nil`.
```
```if:haskell
Return empty list if root is `Nothing`.
```
```if:python
Return empty list if root is `None`.
```
```if:csharp
Return empty list if root is 'null'.
```
```if:java
Return empty list is root is 'null'.
```

Example 1 - following tree:

                     2
                8        9
              1  3     4   5

Should return following list:

    [2,8,9,1,3,4,5]

Example 2 - following tree:

                     1
                8        4
                  3        5
                             7
Should return following list:

    [1,8,4,3,5,7]