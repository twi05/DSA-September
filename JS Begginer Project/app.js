const happy = document.querySelector(".open");
const zipped = document.querySelector(".close");

happy.addEventListener('click', () => {
    if (happy.classList.contains('open')) {

        zipped.classList.add('active');
        happy.classList.remove('active');
    }
});
zipped.addEventListener('click', () => {
    if (zipped.classList.contains('close')) {
        happy.classList.add('active');
        zipped.classList.remove('active');

    }
});