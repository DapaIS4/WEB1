document.addEventListener("DOMContentLoaded", function() {
    window.addEventListener("scroll", function() {
      let navbar = document.querySelector("header");
      if (window.scrollY > 100) {
        navbar.classList.remove("bg-transparent");
        navbar.classList.add("bg-white");
        navbar.classList.add("top-25px");
        navbar.classList.add("-translate-y-25px");
      } else {
        navbar.classList.add("bg-transparent");
        navbar.classList.remove("bg-white");
        navbar.classList.remove("top-25px");
        navbar.classList.remove("-translate-y-25px");        
      }
    });
  });