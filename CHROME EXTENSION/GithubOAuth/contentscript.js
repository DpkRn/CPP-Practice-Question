
console.log("hey i am running on content script on current tabs !")
//document.body.style.backgroundColor="red"
//this can only access the curr tab or webpages we cannot access btn from popup.html

// sending message.. if any one got message it will get response sent by reciever with same key
//recieving response is optional
// chrome.runtime.sendMessage({msg:"hi i am from content"},(response)=>{
//     console.log(response.msg)
// })


//getting msg from background and sending response  is optional
chrome.runtime.onMessage.addListener((message,sender,sendresponse)=>{
    console.log(message);
    sendresponse({message:"whatsup popup i got message"})  
  
    
});

  

