
chrome.bookmarks.onCreated.addListener((id,bookmark)=>{
  chrome.tabs.query({active:true,currentWindow:true},(tab)=>{
    console.log(bookmark.dateAdded)
    chrome.tabs.sendMessage(tab[0].id,{msg:"saveBookmark",title:bookmark.title,url:bookmark.url,dateadded:bookmark.dateAdded});
  })

});
chrome.runtime.onInstalled.addListener(({reason}) => {
    console.log(reason)
    if (reason === 'install') {
      chrome.tabs.create({
        url: "https://www.instagram.com/uffh_rn/?hl=en"
      });
    }
  });



  

    

