class Solution {
  public:
    int bestClosingTime(string customers) {
      int yc=0,pyc=0,flag=0;

      for(int i = 0;i<customers[i];i++){
        if(customers[i]=='N'){
          if(yc>pyc){
            flag= customers[i];
            pyc=yc;
          }
          yc=0;
        }
        else{
          yc++;
        }
      }
      return flag;
    }
};
