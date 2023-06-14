/*class emp{
    constructor()
    {
        console.log("this is an constructor");
    }
}

class manager extends emp{
   
  
    constructor()
    {
        super();
        console.log("this is an manager ");
    }
  
}

let c=new manager();
console.log(c);*/

//static method and property

/*class example{
    
   constructor(n)
   {
     this.name=n;
     console.log("given name :"+name);
   }
    
    static h="Yash Nikam";

   static get()
   {
     console.log("this is an static method");
   }  

}
 
let b=new example("HII......");
   console.log(example.h);
   console.log(example.get());*/

   //public and private access fire

   class base{
      
         #name="yash nikam";
       /*  constructor(n)
         {
            this.#name=n;
         }*/

         pubfun(name)
         {
           this.get=name;
         }
   }

   let b1=new base();
   //console.log(b1.#name); not access it cause private
   console.log(b1.pubfun());