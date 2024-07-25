
document.addEventListener("DOMContentLoaded",runFunction);
function runFunction(){
    console.log("i am running on popup.js console !");
    const btn=document.getElementById('btn')
    btn.addEventListener("click",clickFun);
    function clickFun(){
       
        console.log("button clicked !")
        if(document.body.style.backgroundColor==="blue")
            document.body.style.backgroundColor="antiquewhite"
        else document.body.style.backgroundColor="blue"




    }
  //sending message to background
//   chrome.runtime.sendMessage({msg:"hi background i am from popup"},(response)=>{
//     console.log(response.msg)
// })

chrome.action.onClicked.addListener(()=>{
    console.log("clicked clicked")
})

    //sending message to content script
    // chrome.tabs.query({active:true,currentWindow:true},function(tab){
    //     chrome.tabs.sendMessage(tab[0].id,{msg:"hie its me"},function(response){
    //         console.log(response)
    //     })
    // })

    
}



