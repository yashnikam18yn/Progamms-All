console.log("this is an local storage js");

localStorage.setItem("name","yash");
localStorage.setItem("secound","nikam");

 let name=localStorage.getItem('name');
 console.log(name);

 let secound=localStorage.getItem('secound');
 console.log(secound);


 //clear the local storage 
 //localStorage.clear();

 //remove key
 localStorage.removeItem('name');

 //updating new value at the perticular key
 localStorage.setItem('secound','ronaldo');