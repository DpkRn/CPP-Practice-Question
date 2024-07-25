chrome.runtime.onMessage.addListener(data=>{
    const {event,prefs}=data
    switch(event){
        case "start":
            console.log(prefs)
            chrome.storage.local.set(prefs)
        break;
        case "stop":
            console.log("stopped")
        break;
        default: console.log("nothing came !!!")
    }
})

const selection=window.getSelection().toString()
if(selection) console.log(selection)