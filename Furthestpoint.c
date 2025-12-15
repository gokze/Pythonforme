int furthestDistanceFromOrigin(char* moves) {
    int left_count=0;
    int right_count=0;
    int dist=0;
    for(int i=0;i<strlen(moves);i++){
        if(moves[i]=='L'){
            left_count+=1;
        }
        if(moves[i]=='R'){
            right_count+=1;
        }
    }
    printf("%d %d",left_count,right_count);
    for(int i=0;i<strlen(moves);i++){
        if(left_count>=right_count){
            if(moves[i]=='_'){
                moves[i]='L';
            }
        }
        if(right_count>left_count){
            if(moves[i]=='_'){
                moves[i]='R';
            }
        }
        }
        for(int i=0;i<strlen(moves);i++){
            if(moves[i]=='L'){
                dist-=1;
            }
            if(moves[i]=='R'){
                dist+=1;
            }
            printf("%d",dist);
        }
        return abs(dist);

}
