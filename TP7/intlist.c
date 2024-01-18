#include<stdio.h>
#include<stdlib.h>

typedef struct node node;
struct node {
    int val;
    node *next;
};

node *create_node(int val) {
    node *p;
    p = malloc(sizeof(node));
    p->val = val;
    p->next = NULL;
    return p;
}

void print_list(node *head) {
    node *walk;

    walk = head;
    while (walk != NULL) { // ou juste walk
        printf("%d ", walk->val);
        walk = walk->next;
    }
    printf("\n");
}

node *append_val(node *head, int val) {
    node *newnode, *walk;

    newnode = create_node(val);

    // note : on peut omettre tous les "!= NULL"
    // un pointeur est "faux" ssi il est NULL
    if (head == NULL) { // liste vide
        head = newnode;
    } else {            // on parcourt la liste jusqu'à la fin
        walk = head;
        while (walk->next != NULL) { // on va jusqu'au dernier nœud
            walk = walk->next;
        }
        walk->next = newnode; // on ajoute le nouvel élément
    }
    return head;
}

node *insert(node *head, int val) {
    node *n = create_node(val);
    n->next = head;
    return n;
}

node *nremove(node *head) {
    node *n = head->next;
    free(head);
    return n;
}

int length(node *head) {
    node *walk;
    int len;

    len = 0;
    walk = head;
    while (walk != NULL) {
        len++;
        walk = walk->next;
    }
    return len;
}

int max(node *head) {
    node *walk;
    int max;

    max = head->val;
    walk = head->next;
    while (walk != NULL) {
        if (walk->val > max) {
            max = walk->val;
        }
        walk = walk->next;
    }
    return max;
}

int min(node *head) {
    node *walk;
    int min;

    min = head->val;
    walk = head->next;
    while (walk != NULL) {
        if (walk->val < min) {
            min = walk->val;
        }
        walk = walk->next;
    }
    return min;
}

int sum(node *head) {
    node *walk;
    int sum;

    sum = 0;
    walk = head;
    while (walk != NULL) {
        sum += walk->val;
        walk = walk->next;
    }
    return sum;
}

int main() {
    node *head = NULL;

    head = append_val(head, 42);
    head = append_val(head, 12);
    head = append_val(head, -5);
    head = append_val(head, 41);

    printf("longueur de la liste : %d\n", length(head));
    printf("max de la liste : %d\n", max(head));
    printf("min de la liste : %d\n", min(head));
    printf("somme des éléments de la liste : %d\n", sum(head));


    print_list(head);

    return 0;
}

