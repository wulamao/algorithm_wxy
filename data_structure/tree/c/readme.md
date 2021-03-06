### 树的表示方式
1. 双亲表示法
    - 适用于频繁查找节点父亲的情况
    - 所有节点排列成数组
    - 节点数据结构中包含两个成员：数据成员以及父亲节点下标，根节点的父亲节点下标设为-1
    - 树的数据结构：节点数组、节点数与根的下标
2. 孩子表示法
    - 适用于频繁查找孩子节点的情况
    - 所有节点排列成数组
    - 将节点的孩子排列成一个线性表（链表实现）
    - 节点数据结构中包含：数据成员以及孩子链表的头指针
    - 树的数据结构：节点数组、节点数与根的下标
3. *前两种方法可以合并共享优点，称为孩子双亲表示法 
4. 孩子兄弟表示法
    - 二叉树表示法（将普通树转化成了二叉树）、左孩子右兄弟
    - 节点数据结构：孩子指针、数据成员和兄弟指针
    - 孩子指针指向当前节点的第一个孩子
    - 兄弟指针指向当前界点的下一个兄弟


### 森林和二叉树的相互转化

- 普通树转化的二叉树没有右子树
- 森林转二叉树
    - 各种转化为二叉树
    - 以第一颗树的树根为最终的根，其他树根都作为第一棵树树根的兄弟节点
- 二叉树转森林
    - 按树根的兄弟节点划分，几个兄弟就是几棵树

### 二叉树遍历

- 先序、中序、后序，前两者遍历顺序相同   
- 先序，又称前序
    - 有中节点先访问中节点，然后访问左节点，最后访问右节点
- 中序
    - 有左节点先访问左节点，然后访问中节点，最后访问右节点
- 后序
    - 有左节点先访问左节点，然后访问右节点，最后访问中节点

### 二叉排序树
- 又称二叉搜索树、二叉查找树
- 性质
    - 若左子树不空，左子树上的节点值均小于根节点
    - 若右子树不空，右子树上的节点值均大于根节点
    - 没有相等的节点