#include <stdio.h>
// structure definition
struct vectors {

    int x;
    int y;

};
//function definition
void vectors(struct vectors v1, struct vectors v2, struct vectors s);
//function call statement
int main() {

    struct vectors v1 = {5, 10};
    struct vectors v2 = {6, 12};
    struct vectors s = {0};

    vectors(v1, v2, s);
    
    return 0;


}
//function declaration
void vectors(struct vectors v1, struct vectors v2, struct vectors s) {
    
    s.x = v1.x + v2.x;
    s.y = v1.y + v2.y;
    
    printf("The sum of vector's x component is : %d\n", s.x);
    printf("The sum of vector's y component is : %d\n", s.y);
    

}




