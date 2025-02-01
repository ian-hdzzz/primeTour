const  generos = document.getElementById('generos');
const  subcategorias = document.querySelector('.grid-subcategorias');
const  videoPrincipal = document.querySelector('.videoCompleto');
const  reproducir = document.getElementById('reproducir');
const  buttons = document.querySelectorAll('.target .boton');
const  ciudadesContenedor = document.querySelectorAll('.contenedor-ciudades');
const  principal = document.querySelector('.principal');
const  recomendados = document.querySelector('.artistas-recomendados');
const  finalizar = document.getElementById('finalizar');

console.log('hola')


// mostrar subcategorias

generos.addEventListener('mouseover', () => {
    console.log('hola')

	subcategorias.classList.add('activo');
});

subcategorias.addEventListener('mouseleave', () => {
    console.log('hola')

	subcategorias.classList.remove('activo');
});

buttons.forEach(button => {
    button.addEventListener('click', () => {
        const ciudades = button.closest('.target').querySelector('.contenedor-ciudades');
        if (ciudades) {
            ciudades.classList.add('activo');
            console.log('Ciudad activa');
        }
    });
});

ciudadesContenedor.forEach(ciudad => {
    ciudad.addEventListener('mouseleave', () => {
            ciudad.classList.remove('activo');
    });
});


// Reproducir video principal
reproducir.addEventListener('click', () => {
    console.log('hola')
	videoPrincipal.classList.add('activo');
	principal.classList.add('inactivo');
	recomendados.classList.add('inactivo');
    finalizar.classList.add('activo')

});
finalizar.addEventListener('click', () => {
    console.log('hola')
	videoPrincipal.classList.remove('activo');
	principal.classList.remove('inactivo');
	recomendados.classList.remove('inactivo');
    finalizar.classList.remove('activo')

});