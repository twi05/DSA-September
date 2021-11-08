let data = [{
        name: ' Twi',
        age: '2520'
    },
    {
        name: ' Twin',
        age: '220'
    },
    {
        name: ' Twins',
        age: '280'
    },
    {
        name: ' Twinsh',
        age: '280'
    },
    {
        name: ' Twinshu',
        age: '280'
    },
    {
        name: ' TwinshuP',
        age: '250'
    },
];

const info = document.querySelector('#info');
let details = data.map(function(item) {
    return '<div>' + item.age + " this is age of " + item.name + '</div>';
});

info.innerHTML = details.join("\n");