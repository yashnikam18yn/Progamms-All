console.log("this is an promise tut");

let mypromise=new Promise(function(resolve,reject)
{
    let x="yash";
    let y="yash";
 
      if(x==y)

      {
        resolve();
      }else
      {
        reject();
      }   
});

 mypromise.then(function(){
    console.log("Success");
 });

 mypromise.catch(function(){
    console.log("failed");
 });