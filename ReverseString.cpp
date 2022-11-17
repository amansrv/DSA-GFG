string reverseWord(string str){
    int j = str.length() -1;
    for (int i=0; i<j; i++,j--) {
        swap(str[i], str[j]); 
     }
     return str;
}
