(function(){
  // Sidebar toggle for mobile
  var menuBtn = document.getElementById('menuToggle');
  var sidebar = document.getElementById('sidebar');
  if(menuBtn && sidebar){
    menuBtn.addEventListener('click', function(){
      var open = sidebar.classList.toggle('open');
      menuBtn.setAttribute('aria-expanded', open ? 'true' : 'false');
    });
  }

  // Simple client-side "search" that filters sidebar links by text
  var input = document.getElementById('searchInput');
  var list = document.getElementById('navList');
  if(input && list){
    input.addEventListener('input', function(e){
      var q = e.target.value.toLowerCase().trim();
      var links = list.querySelectorAll('a');
      links.forEach(function(a){
        var t = (a.dataset.title || a.textContent || '').toLowerCase();
        var match = q === '' || t.indexOf(q) !== -1;
        a.parentElement.style.display = match ? '' : 'none';
      });
      // Open sidebar when searching on mobile
      if(q && sidebar){ sidebar.classList.add('open'); }
    });
  }
})();