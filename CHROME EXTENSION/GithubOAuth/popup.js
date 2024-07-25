document.getElementById('fetch').addEventListener('click', () => {
    chrome.identity.getAuthToken({ interactive: true }, (token) => {
      if (chrome.runtime.lastError) {
        console.error(chrome.runtime.lastError);
        return;
      }
      
      fetch('https://api.github.com/user/repos', {
        headers: {
          'Authorization': `Bearer ${token}`
        }
      })
      .then(response => response.json())
      .then(data => {
        const repoList = document.getElementById('repo-list');
        repoList.innerHTML = '';
        data.forEach(repo => {
          const li = document.createElement('li');
          li.textContent = repo.name;
          repoList.appendChild(li);
        });
      })
      .catch(error => console.error('Error fetching repos:', error));
    });
  });
  