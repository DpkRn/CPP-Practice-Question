// Initialize Firebase
const firebaseConfig = {
    apiKey: "AIzaSyChMhTmDnwWLVj9pOt1rMYJEt7vWXDeKTU",
    authDomain: "fir-9bf86.firebaseapp.com",
    projectId: "fir-9bf86",
    storageBucket: "fir-9bf86.appspot.com",
    messagingSenderId: "600090434927",
    appId: "1:600090434927:web:79bc214b2af12925439c9a",
    measurementId: "G-XW4SYGC45T",
  };
  
  firebase.initializeApp(firebaseConfig);
  
  // Get a reference to the database service
  const database = firebase.database();
  
  // Function to generate a random string for short URL
  function generateRandomString(length) {
    const characters = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
    let result = '';
    for (let i = 0; i < length; i++) {
      result += characters.charAt(Math.floor(Math.random() * characters.length));
    }
    return result;
  }
  
  // Function to shorten URL
  function shortenUrl() {
    const longUrl = document.getElementById('longUrlInput').value;
    const shortCode = generateRandomString(6);
  
    // Save the original URL and short code to Firebase
    database.ref('urls/' + shortCode).set({
      originalUrl: longUrl
    }).then(() => {
      // Display the shortened URL
      document.getElementById('shortUrl').innerHTML = 'Shortened URL: <a href="' + longUrl + '" target="_blank">https://yourdomain.com/' + shortCode + '</a>';
    }).catch((error) => {
      console.error('Error shortening URL: ', error);
    });
  }
  