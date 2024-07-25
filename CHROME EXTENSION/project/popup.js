const startDate=document.getElementById("start-date")
const endDate=document.getElementById("end-date")
const locationId=document.getElementById("dropdown")

const saveBtn=document.getElementById("save")
const stopBtn=document.getElementById("stop")


saveBtn.addEventListener("click",()=>{   
    console.log("button clicked") 
   // fetch("http://api.iisfm.nic.in/Distapi/Districts").then((response)=>response.json()).then(json=>console.log(json))  
let prefs={
    location:locationId.value,
    start_date:startDate.value,
    end_date:endDate.value
}
    chrome.runtime.sendMessage({event:"start",prefs})
})


stopBtn.addEventListener("click",()=>{
    chrome.runtime.sendMessage({event:"stop"})
})


chrome.storage.local.get(["location","start_date","end_date"],(result)=>{
   let {location,start_Date,end_Date}=result
   if(location){
    locationId.value=location
   }
   if(start_Date){
    startDate.value=start_Date
   }
   if(end_Date){
    endDate.value=end_Date
   }
   
})
