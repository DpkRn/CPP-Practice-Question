
// function copyFormData(){
//     nodes=document.querySelectorAll('span.header-child.sm-10.tw-font-Georgia.tw-font-bold');
//     let text="";
//     for(x of nodes) text+=x.innerText+"#"
//     //chrome.runtime.sendMessage({msg:text});
//     copyToClipboard(text)
// }

// function copyToClipboard(text) {
//   // Create a temporary textarea element
//   const textArea = document.createElement("textarea");
//   textArea.value = text;
//   document.body.appendChild(textArea);
//   textArea.focus();
//   textArea.select();
//   try {
//       const successful = document.execCommand('copy');
//       const msg = successful ? 'successful' : 'unsuccessful';
//       console.log('Fallback: Copying text command was ' + msg);
//   } catch (err) {
//       console.error('Fallback: Oops, unable to copy', err);
//   }
//   document.body.removeChild(textArea);
// }


function copyFormData() {
  
  source=document.querySelectorAll('th')
  target=document.querySelectorAll('input')
  let i=3;
  for(x of source){
    target[i].value=x.innerText
    i++;
  }
  btn=document.querySelectorAll('button')
   btn[1].click()
  // console.log(source)
}



chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  if (message.action === 'copyFormData') {
    copyFormData();
    sendResponse({ status: 'copied' });
  }
});
