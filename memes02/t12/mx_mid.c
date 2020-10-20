int mx_mid(int a, int b, int c){
    if((a < b && b < c) || (c < b &&  b < a)){
    return b;
    }
    else if((b < a && a < c) || (c < a &&  a < b)){
    return a;
    }
    else{
    return b;
    } 
}

