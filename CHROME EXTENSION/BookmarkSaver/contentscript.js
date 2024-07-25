chrome.runtime.onMessage.addListener((bookmark)=>{
    if(bookmark.msg="saveBookmark"){
        console.log("msg got")       
            const title=bookmark.title
            const timestamp=bookmark.dateadded
            const url=bookmark.url
            // let timestamp = 1625731200000;

            // Create a Date object from the timestamp
            let date = new Date(timestamp);

            // Extract the day, month, and year
            let day = date.getDate();
            let month = date.getMonth() + 1; // Months are zero-indexed
            let year = date.getFullYear();

            // Display the extracted values
            console.log(`Day: ${day}, Month: ${month}, Year: ${year}`);

            const content=title+'\n'+url+'\n'+day+"/"+month+"/"+year+'\n'
            console.log(content)
            const domain=title.split('/')
            const blobUrl = URL.createObjectURL(new Blob([content]));
            const a=document.createElement('a');
            a.download=title+'.txt'
            a.href=blobUrl
            a.click()
            console.log("saved !")
    }
})


  

