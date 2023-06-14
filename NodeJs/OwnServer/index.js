console.log("Yash Nikam Server");

// import { createServer } from 'http';
const http=require("http");

const server=http.createServer((req,res)=>{
    res.end("Hello From This side");
});

server.listen(8000,()=>{
  console.log("Server Is listening at port 8000");
});
