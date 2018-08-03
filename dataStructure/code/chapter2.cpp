//2.1 A = A U B 合并两张表

void union(Linear_List LA, Linear_List LB){
	n = ListLength(LA);
	for(i = 1; i <= ListLength(LB); i++){
		x = GetNode(LB, i);
		if(LocateNode(LA, x) == 0){
			InsertList(LA, ++n, x);
		}
	}
} 

//2.2 
void purge(Linear_List L){
	i + 1;
	while(i <= ListLength(L)){
		x = GetNode(L, i);
		j = j + 1;
		while(j <= ListLength(L)){
			y = GetNode(L, j);
			if(x == y){
				DeleteList(L, j);
			}else{
				j++;
			}
		}
		i++;
	}
}