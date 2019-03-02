int digitsProduct(int p) 
{
   if(!p)
      return 10;
   if(p==1)
      return 1;
   
   int i=9;
   string r="";
   while(i>1)
   {
      if(!(p%i))
      {
         p/=i;
         r=to_string(i)+r;
      }
      else i--;
   }
   return p==1?stoi(r):-1;
}