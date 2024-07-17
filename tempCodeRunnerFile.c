a.ptr = &b;
    b.ptr = &c;
    c.ptr = &d;
    d.ptr = &a;
    printf("Data of a is: \n%d\t%c",b.ptr->data, b.ptr->ch);
    printf("Data of b is: \n%d\t%c",c.ptr->data, c.ptr->ch);
    printf("Data of c is: \n%d\t%c",d.ptr->data, d.ptr->ch);
    printf("Data of d is: \n%d\t%c",a.ptr->data, a.ptr->ch);