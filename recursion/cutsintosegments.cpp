       
       if(n==0){
            return 0;
       }
       if(n<0) return INT_MIN;

       int option1=1+maximizeTheCuts(n-x,x,y,z);
       int option2=1+maximizeTheCuts(n-y,x,y,z);
       int option3=1+maximizeTheCuts(n-z,x,y,z);
       int ans=max(option1,option2,option3);
        return ans;