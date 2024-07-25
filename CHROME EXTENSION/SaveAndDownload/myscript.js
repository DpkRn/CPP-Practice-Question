const save = document.getElementById("save");
const open = document.getElementById("open");
const note = document.getElementById("note");

save.onclick = () => {
  const contents = note.value;
  const blobUrl = window.URL.createObjectURL(new Blob([contents]));
  const a = document.createElement("a");
  a.download = "download.txt";
  a.href = blobUrl;
  a.click();
};

open.onchange = () => {
  const file = open.files[0];
  if (file == null) return;
  const reader = new FileReader;
  reader.onload = function () {
    note.value = reader.result;
  }
  reader.readAsText(file);
};