const options = {
    method: 'GET',
    url: 'https://juanroldan1989-moviequotes-v1.p.rapidapi.com/api/v1/quotes',
    params: {movie: 'Avenger', actor: 'Al Pacino'},
    headers: {
      Authorization: 'Token token=yd8WzkWNEEzGtqMSgiZBrwtt',
      'X-RapidAPI-Key': 'SIGN-UP-FOR-KEY',
      'X-RapidAPI-Host': 'juanroldan1989-moviequotes-v1.p.rapidapi.com'
    }
  };
  



fetch(url)
.then(res=>res.json())
.then(res=>{
    console.log(res);
})

