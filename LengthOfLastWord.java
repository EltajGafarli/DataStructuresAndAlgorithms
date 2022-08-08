class LengthOfLastWord {
    public int lengthOfLastWord(String s) {
      int i = s.length() - 1;
      int j = 0;
      int len = 0;
      while(i >= 0){
        if(s.charAt(i) != ' '){
          len ++;
          if(len > i){
            break;
          }
          if(s.charAt(i - len) == ' '){
            break;
          }
        }else{
          i --;
        }
      }
      return len ;
    }
}
