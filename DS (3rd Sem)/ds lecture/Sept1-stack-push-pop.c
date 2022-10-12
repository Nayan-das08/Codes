// push and pop in a stack

# include <stdio.h>
# define size 10

//int const size = 10;
int top = -1;
int stack[size];
  
void display() {
  printf("\nstack :");
  for (int i=0; i<=top; i++) {
    printf("\t%d", stack[i]);
  }
}

void push(int n) {
  if (top >= size-1)
    printf("\nSTACK OVERFLOW");
  else {
    top++;
    stack[top] = n;
  }
  printf("\n%d is pushed", n);
  display();
}

void pop() {
  if (top == -1)
    printf("\nSTACK UNDERFLOW");
  else {
    printf("\n%d is popped", stack[top]);
    top--;
  }
  display();
}
void main() {
  int i;

  push(10);
  push(40);
  push(30);
  push(100);
  push(25);
  pop();
}