chrome.tabs.onCreated.addListener(tabs=>{
    // it will work when new tab will be created
    console.log("new tab opened");
    console.log(tabs)
})
function sendMessageToPopup(message) {
    chrome.runtime.sendMessage({ action: "sendToPopup", data: message });
}
chrome.tabs.onUpdated.addListener((tabId,changeInfo,tabs)=>{
   // console.log("refershed")
    // console.log(tabId)
    // console.log(tabs)
    // console.log(changeInfo)
    if (changeInfo.status != 'complete')
        return;
    console.log(tabs)
        console.log(changeInfo.status)
    if (tabs.url.indexOf('linkedin.com') != -1) {
        
       chrome.tabs.query({active:true,currentWindow:true},(tab)=>{
        console.log(tab[0].id)
        chrome.tabs.sendMessage(tab[0].id,{msg:changeInfo.status})
       })


      
    
    // Example of sending a message
    sendMessageToPopup("Hello from background script");
    }

})