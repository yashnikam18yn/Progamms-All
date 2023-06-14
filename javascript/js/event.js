console.log("this is an event");
/*
document.getElementById('btn').addEventListener('click',function(e)
{
    alert("you want to submit form");
    let variable;
    //console.log("you are click on button");
    variable=e.target;
    console.log(variable);
    
});*/

let b=document.getElementById('btn');
b.addEventListener('click',func1);
b.addEventListener('dblclick',func2);
 function func1(e)
 {
      console.log("you are click");
 }

 function func2()
 {
     alert("ERROR!!!!");
 }