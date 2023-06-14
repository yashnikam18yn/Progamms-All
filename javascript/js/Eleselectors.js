console.log("this is an element selectors");

 var x=document.getElementById("yash");
 //console.log(x);
 x.style.color="red";
 let y=x.parentNode;
 console.log(y);

 let c=x.childNodes;
 console.log(c);
 x.style.backgroundColor="lightyellow";
 let f=x.ATTRIBUTE_NODE;
 console.log(f);

 let q=document.querySelector('#yash');
 console.log(q);