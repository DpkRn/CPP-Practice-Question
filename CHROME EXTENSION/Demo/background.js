console.log("i am running on background script i cannot access the webpage content i can only listen the events")
//---------------------------------------------------------------------------------------------------------------

//when new tab opened event listner fired
// chrome.tabs.onCreated.addListener((tab)=>{
//     console.log(tab)
// })

//--------------------------------------------------------------------------------------------------

//when revisit tab  event listner fired
// chrome.tabs.onActivated.addListener((tab)=>{
//     console.log(tab.tabId)
//     chrome.tabs.query({active:true,currentWindow:true},function(tabs){
//         chrome.tabs.sendMessage(tabs[0].id,{msg:"hi i am from background"},function(response){
//             console.log(response)
//         }) 
//         return true;
//     })
// })

//-------------------------------------------------------------------------------------------------

// chrome.runtime.onInstalled.addListener(({reason}) => {
//     console.log(reason)
//     if (reason === 'install') {
//       chrome.tabs.create({
//         url: "https://www.instagram.com/uffh_rn/?hl=en"
//       });
//     }
//     if(reason==="update"){
//         chrome.tabs.create({
//           //  url: "https://www.instagram.com/uffh_rn/?hl=en"
//           });
//     }
//   });

//-------------------------------------------------------------------------------------------------

// chrome.bookmarks.onCreated.addListener((id,bookmark)=>{
//     console.log(id);
//     console.log(bookmark)
// });

//-------------------------------------------------------------------------------------------------
//getting msg from content script or popup js differenciate by msg and sending response  is optional
// chrome.runtime.onMessage.addListener(function(message,sender,response){
   
//         console.log(message.msg)
//      response({msg:"whatsup popup i got message"})  
// });

//-------------------------------------------------------------------------------------------------

//to send message to content script we need tabid so first get then send using chrome.tabs
// chrome.tabs.query({active:true,currentWindow:true},function(tab){
//     chrome.tabs.sendMessage(tab[0].id,{msg:"hi i am from background"},function(response){
//         console.log(response)
//     }) 
// })

  
  //click on extension
  

    

