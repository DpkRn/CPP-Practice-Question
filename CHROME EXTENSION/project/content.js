const selection=window.getSelection().toString()
if(selection){
    chrome.storage.local.set({"lastSelection":selection},()=>{console.log("set to the storage")})
}