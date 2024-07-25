chrome.runtime.onMessage.addListener((msg)=>{
    if(msg.msg==="complete"){
        console.log("yeah, its reload");
    }
})

