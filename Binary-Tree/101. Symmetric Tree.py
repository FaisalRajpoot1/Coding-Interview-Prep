# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        def is_mirror(left, right):
        # Base case: if both nodes are None, they are symmetric.
            if not left and not right:
                return True
        # If one of the nodes is None or values are not equal, not symmetric.
            if not left or not right or left.val != right.val:
                return False
        # Recursively check the subtrees in a mirrored fashion.
            return is_mirror(left.left, right.right) and is_mirror(left.right, right.left)

        # Check if the tree is symmetric starting from the root.
        return is_mirror(root, root)
