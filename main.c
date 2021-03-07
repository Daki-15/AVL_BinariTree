#include <stdio.h>
#include <stdlib.h>

int main(){

    Node *root = NULL;

    root = insertNode(2, root);
    root = insertNode(1, root);
    root = insertNode(7, root);
    root = insertNode(3, root);
    root = insertNode(8, root);

    Inorder(root);

    root = deleteNode(3, root);

    printf("\nAfter deletion: ");
    Inorder(root);

    return 0;
}
