console.log("this is an oop concept");

let car={
    name:"GT-650",
    speed:180,
   run :function()
    {
        console.log("car is an runninfg mode");
    }
};

 function carbody(setname,setspeed)
 {
    let car1=this.setname;
    let car2=this.setspeed

    console.log("car name is :"+car1);
    console.log("car speed is:"+car2);
 }

 let a=car.name;
 console.log("this is an car:"+a);


