console.log("this is an callback function tutorial in js");
/*
let myfunc=function()
{
    return"yash is an good boy";
}

console.log(myfunc());
*/
//let understand about call back function in detail


function say(){
    console.log("this is call back function is js");
}

function sub(a,b,callback)
{
    return (a-b);
    callback();
}

console.log(sub(20,10,say));