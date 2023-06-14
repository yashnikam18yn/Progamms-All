console.log("this an regular expression");

 //let reg=/yash/g; //g stands for global
  
let reg=/yash/i;
 let s="This is an YAsh i love javaScript so much yash";
  
 //exec function 
  let result1=reg.exec(s);
  console.log(result1);
  console.log(result1.input);
  console.log(result1.index);

//test function it return's true

let result2=reg.test(s);
console.log(result2);

//match funtion syntax is differnt

 let result3=s.match(reg);
 console.log(result3);

 //replace function
 let result4=s.replace(reg,'om');
 console.log(result4);