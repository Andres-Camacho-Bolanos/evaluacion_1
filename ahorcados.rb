def ahorcados
  palabras = [
    ["causas", "¿Cómo se le llaman a las categorías para señalar los puntos que dan origen al problema?"],
    ["subcausas", "Detallan los factores que dan origen a las causas:"],
    ["diagrama de ishikawa", "¿De qué otra forma se conoce el diagrama de pescado?"],
    ["brainstorming", "Método para identificar las posibles causas en un diagrama de pescado:"],
    ["espinas", "¿Cómo se les llama a las ramas que se extienden desde la columna central de un diagrama de pescado y representan las categorías de causas que contribuyen al problema en cuestión?"],
    ["causas especiales", "¿Cómo se les conoce a las causas anormales en el proceso, que incluso podrían definirse como otro problema específico?"],
    ["acciones correctivas", "¿Cómo se le llaman a las medidas específicas que se desarrollan para abordar las causas principales identificadas en el diagrama de pescado y solucionar el problema analizado?"],
    ["metodo de pareto", "¿Qué método suele ser utilizado de forma complementaria con el diagrama de pescado para analizar y solucionar un problema o necesidad?"]
  ]
  
  while !palabras.empty?
    par_seleccionado = palabras.sample
    palabra_seleccionada = par_seleccionado[0]
    pregunta = par_seleccionado[1]
    palabras_adivinadas = []
    intentos = 6
    respuesta_array = Array.new(palabra_seleccionada.length, "_")

    puts "¡Bienvenido al juego del ahorcado! Adivina la palabra seleccionada letra por letra."
    puts "Pista: #{pregunta}"

    while intentos > 0 && respuesta_array.include?("_")
      puts "-----------------------------------------"
      puts "Palabra: #{respuesta_array.join(" ")}"
      puts "Intentos restantes: #{intentos}"
      puts "Letras utilizadas: #{palabras_adivinadas.join(", ")}"
      print "Ingresa una letra: "
      usuario = gets
      if usuario.nil?
        puts "Debes ingresar una letra"
        next
      end
      usuario = usuario.chomp.downcase

      if usuario.length != 1
        puts "¡Ingresa solo una letra a la vez!"
      elsif palabras_adivinadas.include?(usuario)
        puts "Ya utilizaste esa letra, intenta con otra."
      elsif palabra_seleccionada.include?(usuario)
        puts "¡Muy bien! La letra '#{usuario}' está en la palabra."
        palabra_seleccionada.split("").each_with_index do |letra, indice|
          respuesta_array[indice] = usuario if letra == usuario
        end
      else
        puts "Lo siento, la letra '#{usuario}' no está en la palabra."
        intentos -= 1
      end

      palabras_adivinadas << usuario
    end

    if respuesta_array.include?("_")
      puts "-----------------------------------------"
      puts "Lo siento, has perdido. La palabra era '#{palabra_seleccionada}'."
    else
      puts "-----------------------------------------"
      puts "¡Felicidades! La palabra era '#{palabra_seleccionada}'."
      palabras.delete(par_seleccionado)
    end
  end
end

ahorcados
