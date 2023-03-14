=begin
Todas las variables fueron definidas previamente
=end

#each
def scoring(array) 
    array.each do |user|
        user.update_score
    end
end

#unless
def scoring(array)
  array.each do |user|
      user.update_score unless user.is_admin?
      end
end

#loop
loop do 
    coder.practice
    if coder.oh_one?
            break
    end
end

#O también

break if coder.oh_one?

#until
until coder.oh_one?
    coder.practice
end

#O también
coder.practice until coder.oh_one?
