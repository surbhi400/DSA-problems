class Solution{
public:	
	
	int divisibleBy11 (string S)
	{
	    
	int sumeven=0;
	int sumodd=0;
	for(int i=0; i<S.size(); i++){
	    if(i%2==0){
	        sumeven+=S[i]-'0';
	    }
	    else{
	        sumodd+=S[i]-'0';
	    }
	    
	}
	if(abs(sumeven-sumodd)%11==0){
	    return 1;
	}
	else{
	    return 0;
	}
	}
};
