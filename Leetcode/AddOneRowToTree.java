class Solution
{
    public TreeNode addOneRow(TreeNode root, int v, int d)
    {
        if (d == 1)
        {
            TreeNode newRoot = new TreeNode(v);
            newRoot.left = root;
            return newRoot;
        }
        else
        {
            addOneRow(root, v, d, 1);
            return root;
        }
    }

    private void addOneRow(TreeNode root, int v, int d, int depth)
    {
        if (root == null)
            return;

        if (depth == d - 1)
        {
            TreeNode left = root.left;
            TreeNode right = root.right;
            root.left = new TreeNode(v);
            root.right = new TreeNode(v);
            root.left.left = left;
            root.right.right = right;
        }
        else
        {
            addOneRow(root.left, v, d, depth + 1);
            addOneRow(root.right, v, d, depth + 1);
        }
    }
}