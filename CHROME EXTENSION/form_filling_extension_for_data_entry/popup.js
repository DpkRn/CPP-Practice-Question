document.getElementById('copyButton').addEventListener('click', () => {
const status=document.querySelector('p')
  status.innerText="copying"
  chrome.tabs.query({ active: true, currentWindow: true }, (tabs) => {
    chrome.scripting.executeScript({
      target: { tabId: tabs[0].id },
      files: ['content.js']
    }, () => {
      chrome.tabs.sendMessage(tabs[0].id, { action: 'copyFormData' }, (response) => {
        if (chrome.runtime.lastError) {
          console.error(chrome.runtime.lastError.message);
      } else {
        if(response.status==='copied')
          status.innerText=response.status
          
      }
      
      });
    });
  });
});

