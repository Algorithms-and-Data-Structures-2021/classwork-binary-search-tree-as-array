# Binary Search Tree as array

Преобразование двоичного дерева поиска в массив, в котором для узла с индексом `index` (при level order обходе дерева):
- `leftChild(index) = 2 * index + 1` - индекс левого потомка
- `rightChld(index) = 2 * index + 2` - индекс правого потомка
- `parent(index) = (index - 1) / 2` - индекс родителя
